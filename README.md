# Werewolf-VR

## 環境

Unity 版本: 2021.3.10f1(有 bug，建議能升到新版就升到新版)

Platform: Meta Quest App(Android)

Supported VR Device: Meta Quest 1/2

[TextMeshPro](https://docs.unity3d.com/Packages/com.unity.textmeshpro@3.0/manual/index.html): 3.0.6

[Oculus XR Plugin](https://docs.unity3d.com/Packages/com.unity.xr.oculus@3.0/manual/index.html): 3.0.2

[Dinner Table](https://assetstore.unity.com/packages/3d/environments/fantasy/dinner-table-55180): 1.1

[Low-Poly Simple Nature Pack](https://assetstore.unity.com/packages/3d/environments/landscapes/low-poly-simple-nature-pack-162153): 1.22

[Day, Night, and Light Controller (3D)](https://assetstore.unity.com/packages/tools/particles-effects/day-night-and-light-controller-3d-201611): 1.0.0

[Oculus Integration SDK](https://developer.oculus.com/downloads/package/unity-integration): 47.0

[Meta Avatars SDK](https://developer.oculus.com/downloads/package/meta-avatars-sdk/): 20.0

[Photon Voice 2(include PUN 2)](https://assetstore.unity.com/packages/tools/audio/photon-voice-2-130518): 2.50

[Name and Place Generator - Random Real Names](https://assetstore.unity.com/packages/tools/particles-effects/name-and-place-generator-random-real-names-101158): 1.02

[POLYGON Particle FX - Low Poly 3D Art by Synty](https://assetstore.unity.com/packages/vfx/particles/polygon-particle-fx-low-poly-3d-art-by-synty-168372): 1.0

[Free Fireworks - Fire FX - Nova Sound](https://assetstore.unity.com/packages/audio/sound-fx/free-fireworks-fire-fx-nova-sound-39475): FFireworks 1.0

## Installation & Building

1. [Developer Hub](https://developer.oculus.com/manage) 建立 App，須申請 User ID、User Profile、Avatars、Deep Linking 資料使用權限
2. Copy App ID & 替換 Oculus Platform Settings 中的 `Oculus Go/Quest or Gear VR`
3. Player Settings 設定 keystore
4. Build Settings 切換至 Android，並將 IL2CPP Code Generation 改至 Faster(smaller) builds
5. 按下 Build 按鈕
6. 安裝 apk

## 資料夾說明

* WerewolfVR: 遊戲主專案目錄(=專案名稱)
* tests: 放置各種測試功能用途的 unity 專案

