shutdown
========

I'm tired of using pointless programs to shutdown my PC after
rendering a video. Windows programs that do this are 
pretty unreliable. This small shutdown script for Windows takes
a certain amount of minutes and shuts down your Computer for you.

## Directions

- start shutdown countdown
```
sd.exe numberOfMinutes
```

OR

```
sd numberOfMinutes
```

Example: sd.exe 60
-> means shutdown in 60 minutes.

- Cancel shutdown
```
sd cancel
sd.exe cancel
```

OR

```
shutdown /a
```

## Requirements

- Windows 7 OR Windows 8
- Cygwin or Cygwin-embedded terminal



