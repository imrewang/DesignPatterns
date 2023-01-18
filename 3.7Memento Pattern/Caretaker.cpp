#include "Caretaker.h"
MemoContainer::MemoContainer():m_currentPos(0)
{
}

void MemoContainer::save(Memo memo)
{
	if (m_memoContainer.size() < MAX_SAVE_MEMO)
	{
		m_memoContainer.push_back(memo);
		m_currentPos = m_memoContainer.size() - 1;
	}
	else {
		m_memoContainer.pop_front();
		m_memoContainer.push_back(memo);
		m_currentPos = MAX_SAVE_MEMO - 1;
	}
}

Memo MemoContainer::goBack()
{
	if (m_memoContainer.size() > (unsigned int)m_currentPos && m_currentPos > 0) {
		return m_memoContainer[m_currentPos--];
	}
	else {
		m_currentPos = m_memoContainer.size() - 1;
	}
	return Memo();
}
