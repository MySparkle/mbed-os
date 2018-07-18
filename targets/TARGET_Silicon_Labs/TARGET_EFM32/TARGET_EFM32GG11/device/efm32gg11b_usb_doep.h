/**************************************************************************//**
 * @file efm32gg11b_usb_doep.h
 * @brief EFM32GG11B_USB_DOEP register and bit field definitions
 * @version 5.3.2
 ******************************************************************************
 * # License
 * <b>Copyright 2017 Silicon Laboratories, Inc. http://www.silabs.com</b>
 ******************************************************************************
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software.@n
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.@n
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Silicon Laboratories, Inc.
 * has no obligation to support this Software. Silicon Laboratories, Inc. is
 * providing the Software "AS IS", with no express or implied warranties of any
 * kind, including, but not limited to, any implied warranties of
 * merchantability or fitness for any particular purpose or warranties against
 * infringement of any proprietary rights of a third party.
 *
 * Silicon Laboratories, Inc. will not be liable for any consequential,
 * incidental, or special damages, or any other relief, or for any claim by
 * any third party, arising from your use of this Software.
 *
 *****************************************************************************/

#if defined(__ICCARM__)
#pragma system_include       /* Treat file as system include file. */
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
#pragma clang system_header  /* Treat file as system include file. */
#endif

/**************************************************************************//**
* @addtogroup Parts
* @{
******************************************************************************/
/**************************************************************************//**
 * @brief USB_DOEP USB DOEP Register
 * @ingroup EFM32GG11B_USB
 *****************************************************************************/
typedef struct {
  __IOM uint32_t CTL;          /**< Device Control OUT Endpoint 1 Control Register  */
  uint32_t       RESERVED0[1]; /**< Reserved for future use **/
  __IOM uint32_t INT;          /**< Device OUT Endpoint 1 Interrupt Register  */
  uint32_t       RESERVED1[1]; /**< Reserved for future use **/
  __IOM uint32_t TSIZ;         /**< Device OUT Endpoint 1 Transfer Size Register  */
  __IOM uint32_t DMAADDR;      /**< Device OUT Endpoint 1 DMA Address Register  */
  uint32_t       RESERVED2[2]; /**< Reserved future */
} USB_DOEP_TypeDef;

/** @} End of group Parts */