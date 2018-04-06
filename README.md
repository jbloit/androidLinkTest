# Minimal Android app with Ableton Link

This app is just meant to show how to hook the Ableton Link library to an Android app. It's not intended to show some best practice code (I'm just starting with Android development), but rather to document how I was able to achieve it, in case it helps others.

## What the app does
- join session: The app creates an instance of Link, and joins a Link session. If you have other apps running link on the same wifi, the peer count should be incremented when you launch the app.
- capture session tempo: tapping the capture button should query the current tempo from the session state and display it. Try changing the tempo from another peer, and hit the button again: the tempo should update to the new value.

That's all. No audio.

## Building the app
1. Make sure your setup can [build for NDK with Android Studio](https://developer.android.com/ndk/guides/index.html).  
2. Clone the [Link repo](https://github.com/Ableton/link) somewhere on your machine.
3. In the app project folder, edit the ```app/CMakeLists.txt``` file and replace
```cmake
set (LINK_DIR /Users/bloit/LIBS/link)
```
with the path to your local Link repo.
4. Open this app project in Android Studio (tested on v3.0.1)
5. Sync project with gradle files
6. Build...

## Test
The LinkHut command line app is the most straightforward way of testing. Just follow the [build instructions](https://github.com/Ableton/link#building-and-running-link-examples) to install it on your machine. I usually test by first launching the LinkHut app, and then launch the Android app.

When launching the command line LinkHut, you should see something like the following (assuming there is no other Link peer on your wifi):

```bash
peers: 0 | quantum: 4 | start stop sync: off | tempo: 120 | beats: 10.245176 | XXXO
```

Then once you launch the app, the output should update the peers field:
```bash
peers: 1 | quantum: 4 | start stop sync: off | tempo: 120 | beats: 16.005898 | XOOO
```

Now try increasing or decreasing the tempo in LinkHut (w / e keys), and hit the capture button on the app. You should see the tempo field in the app updating to the same value.
```bash
peers: 1 | quantum: 4 | start stop sync: off | tempo: 134 | beats: 65.568589 | XXOO
```
![](https://github.com/jbloit/androidLinkTest/blob/master/Screenshot.png)
