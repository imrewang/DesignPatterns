#if __cpp_range_based_for >= 200907L

#define FOREACH(var, container) for (var : container)

#else
template <typename container_type>
class Foreach_container
{
public:

	Foreach_container(const container_type& c) : begin(c.begin()), end(c.end()) {}
	Foreach_container(container_type& c) : begin(c.begin()), end(c.end()) {}

	decltype(container_type().begin()) begin, end;
	bool f = true;
};

#define FOREACH(var, container)                                                \
	for (auto _container_ = Foreach_container<decltype(container)>(container); \
	    _container_.f && _container_.begin != _container_.end;                     \
	    ++_container_.begin, _container_.f = true)                                 \
	                                                                               \
	    for (var = *_container_.begin; _container_.f; _container_.f = false)
#endif

#ifndef foreach
# define foreach FOREACH
#endif