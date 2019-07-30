/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
    kPIN_MUX_DirectionInput = 0U,        /* Input direction */
    kPIN_MUX_DirectionOutput = 1U,       /* Output direction */
    kPIN_MUX_DirectionInputOrOutput = 2U /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief
 * Selects function mode (on-chip pull-up/pull-down resistor control).
 * : Inactive.
 * Inactive (no pull-down/pull-up resistor enabled).
 */
#define PIO0_12_MODE_INACTIVE 0x00u
/*!
 * @brief
 * Selects function mode (on-chip pull-up/pull-down resistor control).
 * : Inactive.
 * Inactive (no pull-down/pull-up resistor enabled).
 */
#define PIO0_4_MODE_INACTIVE 0x00u

/*! @name PIO1_0 (number 11), LED_GREEN
  @{ */
#define BOARD_INITPINS_LEDpin1_PERIPHERAL GPIO                    /*!<@brief Device name: GPIO */
#define BOARD_INITPINS_LEDpin1_SIGNAL PIO1                        /*!<@brief GPIO signal: PIO1 */
#define BOARD_INITPINS_LEDpin1_GPIO GPIO                          /*!<@brief GPIO device name: GPIO */
#define BOARD_INITPINS_LEDpin1_GPIO_PIN 0U                        /*!<@brief PIO1 pin index: 0 */
#define BOARD_INITPINS_LEDpin1_PORT 1U                            /*!<@brief PORT device name: 1U */
#define BOARD_INITPINS_LEDpin1_PIN 0U                             /*!<@brief 1U pin index: 0 */
#define BOARD_INITPINS_LEDpin1_CHANNEL 0                          /*!<@brief GPIO PIO1 channel: 0 */
#define BOARD_INITPINS_LEDpin1_PIN_NAME PIO1_0                    /*!<@brief Pin name */
#define BOARD_INITPINS_LEDpin1_LABEL "LED_GREEN"                  /*!<@brief Label */
#define BOARD_INITPINS_LEDpin1_NAME "LEDpin1"                     /*!<@brief Identifier name */
#define BOARD_INITPINS_LEDpin1_DIRECTION kPIN_MUX_DirectionOutput /*!<@brief Direction */
                                                                  /* @} */

/*! @name PIO1_1 (number 14), LED_BLUE
  @{ */
#define BOARD_INITPINS_LEDpin2_PERIPHERAL GPIO                    /*!<@brief Device name: GPIO */
#define BOARD_INITPINS_LEDpin2_SIGNAL PIO1                        /*!<@brief GPIO signal: PIO1 */
#define BOARD_INITPINS_LEDpin2_GPIO GPIO                          /*!<@brief GPIO device name: GPIO */
#define BOARD_INITPINS_LEDpin2_GPIO_PIN 1U                        /*!<@brief PIO1 pin index: 1 */
#define BOARD_INITPINS_LEDpin2_PORT 1U                            /*!<@brief PORT device name: 1U */
#define BOARD_INITPINS_LEDpin2_PIN 1U                             /*!<@brief 1U pin index: 1 */
#define BOARD_INITPINS_LEDpin2_CHANNEL 1                          /*!<@brief GPIO PIO1 channel: 1 */
#define BOARD_INITPINS_LEDpin2_PIN_NAME PIO1_1                    /*!<@brief Pin name */
#define BOARD_INITPINS_LEDpin2_LABEL "LED_BLUE"                   /*!<@brief Label */
#define BOARD_INITPINS_LEDpin2_NAME "LEDpin2"                     /*!<@brief Identifier name */
#define BOARD_INITPINS_LEDpin2_DIRECTION kPIN_MUX_DirectionOutput /*!<@brief Direction */
                                                                  /* @} */

/*! @name PIO1_2 (number 16), LED_RED
  @{ */
#define BOARD_INITPINS_LEDpin3_PERIPHERAL GPIO                    /*!<@brief Device name: GPIO */
#define BOARD_INITPINS_LEDpin3_SIGNAL PIO1                        /*!<@brief GPIO signal: PIO1 */
#define BOARD_INITPINS_LEDpin3_GPIO GPIO                          /*!<@brief GPIO device name: GPIO */
#define BOARD_INITPINS_LEDpin3_GPIO_PIN 2U                        /*!<@brief PIO1 pin index: 2 */
#define BOARD_INITPINS_LEDpin3_PORT 1U                            /*!<@brief PORT device name: 1U */
#define BOARD_INITPINS_LEDpin3_PIN 2U                             /*!<@brief 1U pin index: 2 */
#define BOARD_INITPINS_LEDpin3_CHANNEL 2                          /*!<@brief GPIO PIO1 channel: 2 */
#define BOARD_INITPINS_LEDpin3_PIN_NAME PIO1_2                    /*!<@brief Pin name */
#define BOARD_INITPINS_LEDpin3_LABEL "LED_RED"                    /*!<@brief Label */
#define BOARD_INITPINS_LEDpin3_NAME "LEDpin3"                     /*!<@brief Identifier name */
#define BOARD_INITPINS_LEDpin3_DIRECTION kPIN_MUX_DirectionOutput /*!<@brief Direction */
                                                                  /* @} */

/*! @name PIO0_4 (number 6), BTN_K3
  @{ */
#define BOARD_INITPINS_BTNpin3_PERIPHERAL GPIO                   /*!<@brief Device name: GPIO */
#define BOARD_INITPINS_BTNpin3_SIGNAL PIO0                       /*!<@brief GPIO signal: PIO0 */
#define BOARD_INITPINS_BTNpin3_GPIO GPIO                         /*!<@brief GPIO device name: GPIO */
#define BOARD_INITPINS_BTNpin3_GPIO_PIN 4U                       /*!<@brief PIO0 pin index: 4 */
#define BOARD_INITPINS_BTNpin3_PORT 0U                           /*!<@brief PORT device name: 0U */
#define BOARD_INITPINS_BTNpin3_PIN 4U                            /*!<@brief 0U pin index: 4 */
#define BOARD_INITPINS_BTNpin3_CHANNEL 4                         /*!<@brief GPIO PIO0 channel: 4 */
#define BOARD_INITPINS_BTNpin3_PIN_NAME PIO0_4                   /*!<@brief Pin name */
#define BOARD_INITPINS_BTNpin3_LABEL "BTN_K3"                    /*!<@brief Label */
#define BOARD_INITPINS_BTNpin3_NAME "BTNpin3"                    /*!<@brief Identifier name */
#define BOARD_INITPINS_BTNpin3_DIRECTION kPIN_MUX_DirectionInput /*!<@brief Direction */
                                                                 /* @} */

/*! @name PIO0_12 (number 4), BTN_K1
  @{ */
#define BOARD_INITPINS_BTNpin1_PERIPHERAL GPIO                   /*!<@brief Device name: GPIO */
#define BOARD_INITPINS_BTNpin1_SIGNAL PIO0                       /*!<@brief GPIO signal: PIO0 */
#define BOARD_INITPINS_BTNpin1_GPIO GPIO                         /*!<@brief GPIO device name: GPIO */
#define BOARD_INITPINS_BTNpin1_GPIO_PIN 12U                      /*!<@brief PIO0 pin index: 12 */
#define BOARD_INITPINS_BTNpin1_PORT 0U                           /*!<@brief PORT device name: 0U */
#define BOARD_INITPINS_BTNpin1_PIN 12U                           /*!<@brief 0U pin index: 12 */
#define BOARD_INITPINS_BTNpin1_CHANNEL 12                        /*!<@brief GPIO PIO0 channel: 12 */
#define BOARD_INITPINS_BTNpin1_PIN_NAME PIO0_12                  /*!<@brief Pin name */
#define BOARD_INITPINS_BTNpin1_LABEL "BTN_K1"                    /*!<@brief Label */
#define BOARD_INITPINS_BTNpin1_NAME "BTNpin1"                    /*!<@brief Identifier name */
#define BOARD_INITPINS_BTNpin1_DIRECTION kPIN_MUX_DirectionInput /*!<@brief Direction */
                                                                 /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void); /* Function assigned for the Cortex-M0P */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
