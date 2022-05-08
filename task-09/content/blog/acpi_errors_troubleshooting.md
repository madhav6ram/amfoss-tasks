---
title: "ACPI Error Troubleshooting | Linux"
author: "Madhav Ram"
type: ""
date: 2022-05-08T16:00:00+05:30
subtitle: ""
image: ""
tags: [linux, installation-errors, acpi, blog]
---

#### ACPI Errors generally don not indicate hardware issues.

Most ACPI errors do not indicate incompatable hardware and are mostly harmless. Here are some troubleshooting tips to fix this annoying issue.
&nbsp;

* The simplest way would be to simply skip the acpi errors by passing the ```acpi=off``` argument in the grub bootloader screen for that bootup.
###### Note: this will likely result in problems, like not being able to change screen brightness through the software. Always read the implications of these arguments.

*Also try one of (```iommu=soft``` or ```acpi=strict``` ).

* Updating BIOS/Firmware for your motherboard. Old firmware is a common cause for acpi errors. Depending on the model and brand this can be quite a risky or tedious task, proceed with precausion.

* Boot using the UEFI mode and Secure Boot turned off, these settings can be found in the BIOS settings.

* Issues with Graphic Card drivers are also a common issue, depending on your manufacturer, you can try the various arguments. 
(2-AMD, 3-Nvidia)
~~~
pci=noacpi
amd_iommu=off
modprobe.blacklist=nouveau 
~~~

* Finally you may try using older kernels/OSes.
