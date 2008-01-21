/*++

Copyright (c) 2004 - 2006, Intel Corporation                                                         
All rights reserved. This program and the accompanying materials                          
are licensed and made available under the terms and conditions of the BSD License         
which accompanies this distribution.  The full text of the license may be found at        
http://opensource.org/licenses/bsd-license.php                                            
                                                                                          
THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,                     
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.             

Module Name: 

  PlatformData.c

Abstract:
  
  Defined the platform specific device path which will be used by
  platform Bbd to perform the platform policy connect.

--*/

#include "BdsPlatform.h"

//
// Predefined platform default time out value
//
UINT16                      gPlatformBootTimeOutDefault = 10;

//
// Platform specific keyboard device path
//

//
// Predefined platform default console device path
//
BDS_CONSOLE_CONNECT_ENTRY   gPlatformConsole[] = {
  {
    NULL,
    0
  }
};

//
// Predefined platform specific driver option
//
EFI_DEVICE_PATH_PROTOCOL    *gPlatformDriverOption[] = { NULL };

//
// Predefined platform connect sequence
//
EFI_DEVICE_PATH_PROTOCOL    *gPlatformConnectSequence[] = { NULL };
