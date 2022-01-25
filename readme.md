# TCCOE 2022 HAMR Tutorial

## TCCOE 2022 Development Environment Setup

### Prerequisites

An OVA (Open Virtual Appliance) has been created that has all the development tools that will be used in this tutorial preinstalled. You will need a virtualizaiont product that is capable of importing the OVA such as VMWare or VirtualBox.  We recommend using VirtualBox as it is free/open-source and can be downloaded via [https://www.virtualbox.org/wiki/Downloads](https://www.virtualbox.org/wiki/Downloads)


### Install the OVA

1. Download the 6.7GB OVA [here](https://drive.google.com/file/d/16bCMkBtSoHY9fZKJIEKdMjQK5K5C7w0P/view?usp=sharing).
1. In VirtualBox choose ``File >> Import Appliance``
1. Point to the location of the downloaded ``tccoe22.ova`` file in the dialog box that opens and click ``Continue``.
1. Review the appliance settings in the next dialog box and choose ``Import``.  This may take a couple of minutes to complete.

### Launch the Virtual Machine

1. Launch the installed ``debian-11.1-desktop-seL4-sireum-tccoe22`` virtual machine
2. The username and password for the virtual machine are both ``vagrant``.  Enter these into the login dialog box 


## Tutorial Material

1. [AADL Model](temperature_control/readme.md)
1. [HAMR Website](https://hamr.sireum.org/)
1. Slides
1. ...