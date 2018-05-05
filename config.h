// config: ////////////////////////////////////////////////////////////
// 
//#define BLUETOOTH
#define OTA_HANDLER 
#define MODE_AP // phone connects directly to ESP
//#define MODE_STA // ESP connects to WiFi router

#define PROTOCOL_TCP
//#define PROTOCOL_UDP
bool debug = true;

#define VERSION "1.10"
#ifdef MODE_AP
// For AP mode:
const char *ssid = "LK8000";  // You will connect your phone to this Access Point
const char *pw = "Flightcomputer"; // and this is the password
IPAddress ip(192, 168, 4, 1); // From RoboRemo app, connect to this IP
IPAddress netmask(255, 255, 255, 0);

// You must connect the phone to this AP, then:
// menu -> connect -> Internet(TCP) -> 192.168.4.1:8880  for UART0
//                                  -> 192.168.4.1:8881  for UART1
//                                  -> 192.168.4.1:8882  for UART2
#endif


#ifdef MODE_STA
// For STATION mode:

// You must connect the phone to the same router,
// Then somehow find the IP that the ESP got from router, then:
// menu -> connect -> Internet(TCP) -> [ESP_IP]:8880  for UART0
//                                  -> [ESP_IP]:8881  for UART1
//                                  -> [ESP_IP]:8882  for UART2
#endif


/*************************  COM Port 3 (SoftwareSerial) **************/
//#define SERIAL3_RXPIN 21            // receive Pin UART3
//#define SERIAL3_TXPIN 22            // transmit Pin UART3
  
#define NUM_COM   3                 // total number of COM Ports
#define DEBUG_COM 0                 // debug output to COM0
/*************************  COM Port 0 *******************************/
#define UART_BAUD0 19200            // Baudrate UART0
#define SERIAL_PARAM0 SERIAL_8N1    // Data/Parity/Stop UART0
#define SERIAL0_RXPIN 21            // receive Pin UART0
#define SERIAL0_TXPIN 1             // transmit Pin UART0
#define SERIAL0_TCP_PORT 8880       // Wifi Port UART0
/*************************  COM Port 1 *******************************/
#define UART_BAUD1 19200            // Baudrate UART1
#define SERIAL_PARAM1 SERIAL_8N1    // Data/Parity/Stop UART1
#define SERIAL1_RXPIN 16            // receive Pin UART1
#define SERIAL1_TXPIN 17            // transmit Pin UART1
#define SERIAL1_TCP_PORT 8881       // Wifi Port UART1
/*************************  COM Port 2 *******************************/
#define UART_BAUD2 19200            // Baudrate UART2
#define SERIAL_PARAM2 SERIAL_8N1    // Data/Parity/Stop UART2
#define SERIAL2_RXPIN 15            // receive Pin UART2
#define SERIAL2_TXPIN 4             // transmit Pin UART2
#define SERIAL2_TCP_PORT 8882       // Wifi Port UART2

#define bufferSize 1024

//////////////////////////////////////////////////////////////////////////

