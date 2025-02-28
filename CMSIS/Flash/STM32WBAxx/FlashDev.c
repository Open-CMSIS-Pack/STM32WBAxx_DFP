/* -----------------------------------------------------------------------------
 * Copyright (c) 2014 - 2022 ARM Ltd.
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * In no event will the authors be held liable for any damages arising from
 * the use of this software. Permission is granted to anyone to use this
 * software for any purpose, including commercial applications, and to alter
 * it and redistribute it freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software in
 *    a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source distribution.
 *
 *
 * $Date:        16. December 2022
 * $Revision:    V0.0.1
 *
 * Project:      Flash Device Description for ST STM32U59x Flash
 * --------------------------------------------------------------------------- */

/* History:
 *  
 *  Version 0.0.1
 *    Initial release
 
  *  Version 1.0.0
 *    Official release
 */


#include "..\FlashOS.h"        // FlashOS Structures


#ifdef FLASH_MEM

#ifdef STM32WBAxx_1024_Secure
  struct FlashDevice const FlashDevice  =  {
     FLASH_DRV_VERS,             // Driver Version, do not modify!
     "STM32WBAxx 1M Secure Flash",       // Device Name
     ONCHIP,                     // Device Type
     0x0C000000,                 // Device Start Address
     0x00100000,                 // Device Size in Bytes (1MB)
     1024,                       // Programming Page Size
     0,                          // Reserved, must be 0
     0xFF,                       // Initial Content of Erased Memory
     400,                        // Program Page Timeout 400 mSec
     400,                        // Erase Sector Timeout 400 mSec
     // Specify Size and Address of Sectors
     0x2000, 0x000000,           // Sector Size 8kB       
     SECTOR_END
  };
#endif
	#ifdef STM32WBAxx_1024_NSecure
  struct FlashDevice const FlashDevice  =  {
     FLASH_DRV_VERS,             // Driver Version, do not modify!
     "STM32WBAxx 1M NSecure Flash",       // Device Name
     ONCHIP,                     // Device Type
     0x08000000,                 // Device Start Address
     0x00100000,                 // Device Size in Bytes (1MB)
     1024,                       // Programming Page Size
     0,                          // Reserved, must be 0
     0xFF,                       // Initial Content of Erased Memory
     400,                        // Program Page Timeout 400 mSec
     400,                        // Erase Sector Timeout 400 mSec
     // Specify Size and Address of Sectors
     0x2000, 0x000000,           // Sector Size 8kB       
     SECTOR_END
  };
	#endif
#ifdef STM32WBAxx_512K_Secure
  struct FlashDevice const FlashDevice  =  {
     FLASH_DRV_VERS,             // Driver Version, do not modify!
     "STM32WBAxx 512K Secure Flash",       // Device Name
     ONCHIP,                     // Device Type
     0x0C000000,                 // Device Start Address
     0x00080000,                 // Device Size in Bytes (512k)
     1024,                       // Programming Page Size
     0,                          // Reserved, must be 0
     0xFF,                       // Initial Content of Erased Memory
     400,                        // Program Page Timeout 400 mSec
     400,                        // Erase Sector Timeout 400 mSec
     // Specify Size and Address of Sectors
     0x2000, 0x000000,           // Sector Size 8kB       
     SECTOR_END
  };
#endif
	#ifdef STM32WBAxx_512K_NSecure
  struct FlashDevice const FlashDevice  =  {
     FLASH_DRV_VERS,             // Driver Version, do not modify!
     "STM32WBAxx 512K NSecure Flash",       // Device Name
     ONCHIP,                     // Device Type
     0x08000000,                 // Device Start Address
     0x00080000,                 // Device Size in Bytes (512K)
     1024,                       // Programming Page Size
     0,                          // Reserved, must be 0
     0xFF,                       // Initial Content of Erased Memory
     400,                        // Program Page Timeout 400 mSec
     400,                        // Erase Sector Timeout 400 mSec
     // Specify Size and Address of Sectors
     0x2000, 0x000000,           // Sector Size 8kB       
     SECTOR_END
  };
#endif
#ifdef STM32WBAxx_2048_Secure
  struct FlashDevice const FlashDevice  =  {
     FLASH_DRV_VERS,             // Driver Version, do not modify!
     "STM32WBAxx 2M Secure Flash",       // Device Name
     ONCHIP,                     // Device Type
     0x0C000000,                 // Device Start Address
     0x00200000,                 // Device Size in Bytes (2MB)
     1024,                       // Programming Page Size
     0,                          // Reserved, must be 0
     0xFF,                       // Initial Content of Erased Memory
     400,                        // Program Page Timeout 400 mSec
     400,                        // Erase Sector Timeout 400 mSec
     // Specify Size and Address of Sectors
     0x2000, 0x000000,           // Sector Size 8kB       
     SECTOR_END
  };
#endif
	#ifdef STM32WBAxx_2048_NSecure
  struct FlashDevice const FlashDevice  =  {
     FLASH_DRV_VERS,             // Driver Version, do not modify!
     "STM32WBAxx 2M NSecure Flash",       // Device Name
     ONCHIP,                     // Device Type
     0x08000000,                 // Device Start Address
     0x00200000,                 // Device Size in Bytes (2MB)
     1024,                       // Programming Page Size
     0,                          // Reserved, must be 0
     0xFF,                       // Initial Content of Erased Memory
     400,                        // Program Page Timeout 400 mSec
     400,                        // Erase Sector Timeout 400 mSec
     // Specify Size and Address of Sectors
     0x2000, 0x000000,           // Sector Size 8kB       
     SECTOR_END
  };
	#endif
		
	
#endif // FLASH_MEM
