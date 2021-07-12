<p align="center">
<img src="https://i.postimg.cc/bv0dB2fK/logo.png" alt="InnoPlayerSDK" title="InnoPlayerSDK" width="300"/>
</p>

<p align="center">
<a href="https://cocoapods.org/pods/InnoPlayer_iOS_SDK"><img src="https://img.shields.io/cocoapods/v/InnoPlayer_iOS_SDK.svg?style=flat"></a>
<a href="https://cocoapods.org/pods/InnoPlayer_iOS_SDK"><img src="https://img.shields.io/cocoapods/p/InnoPlayer_iOS_SDK.svg?style=flat"></a>
</p>

InnoPlayer SDK is built on top of native player frameworks. Apps that you build with our SDK work seamlessly with our video platform hosting and streaming, and ads products.

## Features
- [x] Play Video on Demand (VOD) and Live Streaming that supports streaming format HLS.
- [x] Easy API.
- [x] Fullscreen video playback
- [x] Adaptive Bitrate (ABR) support and manual quality selection
- [x] Closed Captions (subtitle) support
- [x] Customizable UI
- [x] DRM support (Apple FairPlay)
- [x] AirPlay Cast support
- [x] Objective-C support.
- [x] Swift support.
 
## How To Use

#### Configure Your Project

To complete the SDK import process, you must add the player license key and import the `InnoPlayer_iOS_SDK`.
1. In Xcode, open AppDelegate.swift.
2. Set the player license key by calling the `InnoPlayerController` class setPlayerKey in application:didFinishLaunchingWithOptions.


```swift
InnoPlayerController.setPlayerKey("[your_key_here]");
```


#### Add a Player to Your View

Use the following steps and code examples to add a player to the ViewController.h or ViewController.swift file of your app:

1. In `ViewController.swift`, create a `InnoPlayerController` object named `player`.
2. Create a `InnoConfig` object named config. At the minimum, you must define the file property.
3. Initialize the player with the config.


```swift
let config = InnoConfig(contentURL: "[your_content_url_here]")
player = InnoPlayerController(frame: [your_frame_here], andConfig: config)
self.view.addSubview(player!.view!)
```

InnoPlayer will validate your license key and bundle id of your app. After it passed vaidation, InnoPlayer will show all the playback in your view.


<p align="center">
<kbd><img src="https://i.postimg.cc/63DqmV1L/Simulator-Screen-Shot-i-Phone-SE-2nd-generation-2021-07-09-at-11-48-59.png" alt="InnoPlayerSDK-screen" title="InnoPlayerSDK-screen" width="300"/></kbd>
</p>


## Installation

For installation is recomended using Cocoapods.

#### CocoaPods

InnoPlayer provide Google IMA to show advertising in media player, so please make sure that Google IMA is also installed in your pod.

```ruby
target 'MyApp' do
  pod 'InnoPlayer_iOS_SDK'
  pod 'GoogleAds-IMA-iOS-SDK'
end
```

## References

For complete instructions and API reference, see the [InnoPlayer iOS SDK Reference](https://innoplayer.co/documentation/innoplayer-ios-sdk/index)