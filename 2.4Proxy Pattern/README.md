### 代理模式

当点击下查看原图或稍等一会就会加载出原始高清图片，未加载时的小图片其实就可以通过代理模式实现，原图则是被代理的实例对象

Subject(抽象主题角色/共同接口): PhotoInfo

RealSubject(真实主题角色/真实对象/被代理对象): BigPhoto

Proxy(代理主题角色/代理对象): BigPhotoProxy
