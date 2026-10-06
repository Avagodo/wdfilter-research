# WdFilter.sys

## Decompilation & reconstruction

C reconstruction of Microsoft Defender's file-system minifilter, `WdFilter.sys`, based on the x64 build `4.18.25080.5`. The project contains 954 recovered functions across 60 source files, organized using the matching PDB and disassembly.

## Overview

The reconstructed driver code is under `WdFilter/`, with source files in `src/`, shared declarations in `include/`, and the original resources in `resources/`.

[mpinit.c](WdFilter/src/mpinit.c) contains driver initialization. [RegistrationData.c](WdFilter/src/RegistrationData.c) defines the filter callbacks and context registrations. File operations are handled in [create.c](WdFilter/src/create.c), [write.c](WdFilter/src/write.c), and [scan.c](WdFilter/src/scan.c).

Registry monitoring and protection routines are in [MpReg.c](WdFilter/src/MpReg.c) and the related registry modules. [processcontext.c](WdFilter/src/processcontext.c) and [MpObCallback.c](WdFilter/src/MpObCallback.c) handle process state and object callbacks. DLP, Folder Guard, and file-system hardening have their own modules.

## Brief analysis

WdFilter uses file-system callbacks alongside registry and process notifications. Stream and process contexts retain state between operations, while communication and asynchronous-notification routines pass events to user-mode components. The scanning, DLP, and hardening paths share this infrastructure.

`MpPostRead` in `write.c` is a useful example: it checks the completed operation, acquires the stream context, updates read-monitoring state, and sends a sequential-read notification when the monitoring conditions match. The reconstructed path also shows context release and failure tracing.

Some private layouts and signatures remain inferred. There are 318 unresolved atomic regions, so the full driver is not yet buildable. The reviewed core covers locks, pool allocation, registration tables, and global storage. This package contains source files without a driver build configuration. [Technical notes](docs/TECHNICAL.md) describe the reconstruction and its current limits.

### File Hashes

WdFilter.sys SHA256: `653eb082c2820cee7c7043af89362ed343ce61e9615fc7f0b3ca7ec025d64aba` 

WdFilter.pdb SHA256: `3ba8f1a1372062eb305498365a3743854a06f144dcd211446c5cf90f3251e0ea`
