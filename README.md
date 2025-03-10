# UR3e robot module for [mc_rtc](https://jrl-umi3218.github.io/mc_rtc/)

This package contains a software representation, or a robot module, of [UR3e](https://www.universal-robots.com/products/ur3e/) robot platform. This robot module is used by [mc_rtc](https://jrl-umi3218.github.io/mc_rtc/) framework to realize control of UR3e robot in simulation or in experiments with real platform.

## Required dependencies
- [mc_rtc](https://jrl-umi3218.github.io/mc_rtc/)
- [mc_ur3e_description](https://github.com/isri-aist/mc_ur3e_description)

## Build instructions

```
$ git clone https://github.com/isri-aist/mc_ur3e
$ cd mc_ur3e
$ mkdir build
$ cd build
$ cmake ..
$ make
$ sudo make install
```
