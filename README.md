# DEMO说明
本DEMO用于演示内置编解码SDK的使用，DEMO接收组播流、解码、渲染。<br>

可通过DEMO配置文件设置组播IP、端口等进行设置。


```js
[Config]
;组播IP、端口
MulticastIp=233.233.233.223
MulticastPort=6000

;本地接收组播流所用IP，设置为空时使用系统默认网卡（IP）接收，多网卡时建议设置避免系统默认IP不符合预期。
LocalIp=

;是否支持组播NACK机制
EnableNack=1
;启用组播NACK机制时，组播接收端使用自动分配的本地端口向组播源的NackPort端口发送重传请求。
NackPort=8000

;音频渲染参数指定
AudioSampleRate=44100
AudioChannel=2

;接收JB初始值，单位毫秒
JitterBuffTimeMs=200

;是否收录接收到的码流到TS文件
CaptureDownStreamTs=0

;是否收录接收到的码流到裸码流文件
CaptureDownStreamRaw=0


```
<br>

SDK API的调用集中在SDClient.cpp中

<br>
测试工程使用VS2010或更高版本编译



---

# 相关资源
跟多文档、代码资源见：https://mediapro.apifox.cn

SDK 商用及定制化、技术支持服务可联系：[http://www.mediapro.cc/](http://www.mediapro.cc/)

