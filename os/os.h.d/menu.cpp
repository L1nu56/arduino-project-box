/* file:   os.h.d/menu.h
 * author: Linus Reinholz
 * date:   25.02.2021
 * desc:   Control menu
 * 
 * menu:   1) Box: open/close                                              - Boolean
 *         2) Password reset                                               - String
 *         3) Keypad - 1) Scale
 *         4) Wifi   - 1) Status                                           - Void
 *         5) M4     - 1) Sensors - 1) print data                          - Void
 *                                - 2) Calibrate - 1) CO2                  - Int; Void
 *         (                                     - 2) Kompass)             - Void
 *                       
 *                   - 2) RGB LED -
 *         6) shutdown
 */

#define SERIAL_MENUBACK {
case 0:
     // Go back
     goBack();
     break;
}

void Menu::Serial() {
     printMenu();
     switch ( printMenu ) {
          case 1:
               // Box open/close
               boxOpenClose();
               break;
          
          case 2:
               // Password change
               passwordReset();
               break;
               
          case 3:
               // Submenu Numeric Keypad
               printMenuSub1();
               switch ( printMenuSub1 ) {
                    MENUBACK
                    
                    case 1:
                         // 
                         
                         break;
                         
                    case 2:
                         // 
                         
                         break;
                         
                    default:
                         // You must choose a number, There is no default
                         ;
                         break;
                         
               }
               break;
               
          case 4:
               // Submenu Wifi
               printMenuSub2();
               switch ( printMenuSub2 ) {
                    MENUBACK
                    
                    case 1:
                         // Status
                         printWifiStatus();
                         break;
                         
                    case 2:
                         // Start/Stop
                         wifiStartStop();
                         break;
                         
                    case 3:
                         // Configure
                         printMenuSub2Sub1();
                         switch ( printMenuSub2Sub1 ) {
                              MENUBACK
                              
                              case 1:
                                   // Show 
                                   
                                   break;
                                   
                              case 2:
                                   // 
                                   
                                   break;
                                   
                              default:
                                   // You must choose a number, There is no default
                                   ;
                                   break;
                         
                         }
                         break;
                         
                    default:
                         // You must choose a number, There is no default
                         ;
                         break;
                         
               }
               break;
               
          case 5:
               // Submenu M4
               printMenuSub3();
               switch ( printMenuSub3 ) {
                    MENUBACK
                    
                    case 1:
                         // Submenu Sensors
                         printMenuSub3Sub1();
                         switch ( printMenuSub3Sub1 ) {
                              MENUBACK
                              
                              case 1:
                                   // Show 
                                   
                                   break;
                                        
                              case 2:
                                   // 
                                   
                                   break;
                                   
                              default:
                                   // You must choose a number, There is no default
                                   ;
                                   break;
                         
                         }
                         break;
                    
                    case 2:
                         // Submenu RGB LED
                         printMenuSub3Sub2();
                         switch ( printMenuSub3Sub2 ) {
                              MENUBACK
                              
                              case 1:
                                   // ON/OFF 
                                   ledOnOff();
                                   break;
                                   
                              case 2:
                                   // Accleration
                                   
                                   ledAcc(accleration);
                                   break;
                                   
                              default:
                                   // You must choose a number, There is no default
                                   ;
                                   break;
                         
                         }
                         break;
                         
                    default:
                         // You must choose a number, There is no default
                         ;
                         break;
                         
               }
               break;
               
          case 6:
               shutdown();
               break;
               
          default:
               ;
     }
}

