#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>

#define WHITE 0
#define RED 1
#define GREEN 2
#define BLUE 3
#define YELLOW 4

void set_color(int color) {
    switch(color) {
        case RED: printf("\033[1;31m"); break;
        case GREEN: printf("\033[1;32m"); break;
        case BLUE: printf("\033[1;34m"); break;
        case YELLOW: printf("\033[1;33m"); break;
        case WHITE: printf("\033[0m"); break;
    }
}

void slow_print(const char *message, int delay, int color) {
    set_color(color);
    while (*message) {
        putchar(*message++);
        fflush(stdout);
        usleep(delay * 1000);
    }
    set_color(WHITE);
}

void wait_for_user() {
    printf("\nPress Enter to continue...");
    while (getchar() != '\n');
}

int main() {
    set_color(GREEN);
    slow_print(" Comprehensive Guide to ESP Boards\n\n", 50, GREEN);

    set_color(BLUE);
    slow_print(" 1. Introduction to ESP Boards\n", 50, BLUE);
    slow_print("ESP boards, developed by Espressif Systems, are popular microcontroller boards used for IoT and embedded applications. The most common types are ESP8266 and ESP32.\n\n", 50, BLUE);

    slow_print("ESP8266:\n", 50, BLUE);
    slow_print("- A low-cost Wi-Fi microcontroller with a single-core processor.\n", 50, BLUE);
    slow_print("- Ideal for simple IoT applications where Wi-Fi connectivity is essential.\n\n", 50, BLUE);

    slow_print("ESP32:\n", 50, BLUE);
    slow_print("- A more powerful successor to the ESP8266.\n", 50, BLUE);
    slow_print("- Dual-core processor, Bluetooth, and more GPIOs.\n", 50, BLUE);
    slow_print("- Suitable for complex applications requiring more processing power, Bluetooth connectivity, and additional peripherals.\n\n", 50, BLUE);

    wait_for_user();

    set_color(YELLOW);
    slow_print(" 2. When to Use ESP Boards\n", 50, YELLOW);
    slow_print("- IoT Projects: ESP boards are ideal for connecting devices to the internet, collecting and transmitting data.\n", 50, YELLOW);
    slow_print("- Wireless Communication: With built-in Wi-Fi and Bluetooth, ESP boards can communicate wirelessly with other devices.\n", 50, YELLOW);
    slow_print("- Low-Power Applications: ESP boards have various power-saving modes, making them suitable for battery-powered projects.\n", 50, YELLOW);
    slow_print("- DIY Electronics Projects: Their ease of use and extensive community support make them popular among hobbyists and makers.\n\n", 50, YELLOW);

    wait_for_user();

    set_color(GREEN);
    slow_print(" 3. How to Use ESP Boards\n", 50, GREEN);
    slow_print("Setup and Programming:\n", 50, GREEN);

    slow_print("1. Install Arduino IDE:\n", 50, GREEN);
    slow_print("   - Download and install the [Arduino IDE](https://www.arduino.cc/en/software).\n\n", 50, GREEN);

    slow_print("2. Add ESP Board Manager:\n", 50, GREEN);
    slow_print("   - Go to `File` -> `Preferences`.\n", 50, GREEN);
    slow_print("   - In the `Additional Board Manager URLs` field, add:\n", 50, GREEN);
    slow_print("     ```\n", 50, GREEN);
    slow_print("     http://arduino.esp8266.com/stable/package_esp8266com_index.json\n", 50, GREEN);
    slow_print("     http://dl.espressif.com/dl/package_esp32_index.json\n", 50, GREEN);
    slow_print("     ```\n", 50, GREEN);
    slow_print("   - Click `OK`.\n\n", 50, GREEN);

    slow_print("3. Install Board Package:\n", 50, GREEN);
    slow_print("   - Go to `Tools` -> `Board` -> `Boards Manager`.\n", 50, GREEN);
    slow_print("   - Search for `ESP8266` and `ESP32` and install the packages.\n\n", 50, GREEN);

    slow_print("4. Select the Board:\n", 50, GREEN);
    slow_print("   - Go to `Tools` -> `Board` and select your ESP board (e.g., `NodeMCU 1.0` for ESP8266 or `ESP32 Dev Module` for ESP32).\n\n", 50, GREEN);

    slow_print("5. Connect the Board:\n", 50, GREEN);
    slow_print("   - Connect your ESP board to the computer via USB.\n", 50, GREEN);
    slow_print("   - Select the correct port in `Tools` -> `Port`.\n\n", 50, GREEN);

    slow_print("6. Write and Upload Code:\n", 50, GREEN);
    slow_print("   - Write your code in the Arduino IDE.\n", 50, GREEN);
    slow_print("   - Click the upload button to upload the code to your ESP board.\n\n", 50, GREEN);

    wait_for_user();

    set_color(BLUE);
    slow_print(" 4. Projects to Work On\n\n", 50, BLUE);

    slow_print("Project 1: Wi-Fi Controlled LED\n", 50, BLUE);
    slow_print("- Components:\n", 50, BLUE);
    slow_print("  - ESP8266/ESP32\n", 50, BLUE);
    slow_print("  - LED\n", 50, BLUE);
    slow_print("  - Resistor (220 ohms)\n", 50, BLUE);
    slow_print("  - Breadboard and jumper wires\n\n", 50, BLUE);

    slow_print("Step-by-Step Instructions:\n", 50, BLUE);
    slow_print("1. Circuit:\n", 50, BLUE);
    slow_print("   - Connect the LED to a GPIO pin (e.g., GPIO2 for ESP8266).\n", 50, BLUE);
    slow_print("   - Connect a resistor in series with the LED.\n\n", 50, BLUE);

    slow_print("2. Code:\n", 50, BLUE);
    slow_print("#include <ESP8266WiFi.h> // For ESP8266\n", 50, BLUE);
    slow_print("//#include <WiFi.h> // For ESP32\n", 50, BLUE);
    slow_print("\n", 50, BLUE);
    slow_print("const char* ssid = \"your_SSID\";\n", 50, BLUE);
    slow_print("const char* password = \"your_PASSWORD\";\n", 50, BLUE);
    slow_print("\n", 50, BLUE);
    slow_print("WiFiServer server(80);\n", 50, BLUE);
    slow_print("\n", 50, BLUE);
    slow_print("void setup() {\n", 50, BLUE);
    slow_print("  Serial.begin(115200);\n", 50, BLUE);
    slow_print("  pinMode(2, OUTPUT); // GPIO2\n", 50, BLUE);
    slow_print("  WiFi.begin(ssid, password);\n", 50, BLUE);
    slow_print("\n", 50, BLUE);
    slow_print("  while (WiFi.status() != WL_CONNECTED) {\n", 50, BLUE);
    slow_print("    delay(500);\n", 50, BLUE);
    slow_print("    Serial.print(\".\");\n", 50, BLUE);
    slow_print("  }\n", 50, BLUE);
    slow_print("\n", 50, BLUE);
    slow_print("  Serial.println(\"WiFi connected\");\n", 50, BLUE);
    slow_print("  server.begin();\n", 50, BLUE);
    slow_print("}\n", 50, BLUE);
    slow_print("\n", 50, BLUE);
    slow_print("void loop() {\n", 50, BLUE);
    slow_print("  WiFiClient client = server.available();\n", 50, BLUE);
    slow_print("  if (client) {\n", 50, BLUE);
    slow_print("    String request = client.readStringUntil('\\r');\n", 50, BLUE);
    slow_print("    client.flush();\n", 50, BLUE);
    slow_print("\n", 50, BLUE);
    slow_print("    if (request.indexOf(\"/LED=ON\") != -1) {\n", 50, BLUE);
    slow_print("      digitalWrite(2, HIGH);\n", 50, BLUE);
    slow_print("    }\n", 50, BLUE);
    slow_print("    if (request.indexOf(\"/LED=OFF\") != -1) {\n", 50, BLUE);
    slow_print("      digitalWrite(2, LOW);\n", 50, BLUE);
    slow_print("      digitalWrite(2, LOW);\n", 50, BLUE);
      slow_print("    }\n", 50, BLUE);
      slow_print("\n", 50, BLUE);
      slow_print("    client.print(\"HTTP/1.1 200 OK\\r\\n\");\n", 50, BLUE);
      slow_print("    client.print(\"Content-Type: text/html\\r\\n\\r\\n\");\n", 50, BLUE);
      slow_print("    client.print(\"<!DOCTYPE HTML>\\r\\n<html>\\r\\n\");\n", 50, BLUE);
      slow_print("    client.print(\"<a href=\\\"/LED=ON\\\">Turn LED ON</a><br>\");\n", 50, BLUE);
      slow_print("    client.print(\"<a href=\\\"/LED=OFF\\\">Turn LED OFF</a><br>\");\n", 50, BLUE);
      slow_print("    client.print(\"</html>\\r\\n\");\n", 50, BLUE);
      slow_print("\n", 50, BLUE);
      slow_print("    delay(1);\n", 50, BLUE);
      slow_print("    client.stop();\n", 50, BLUE);
      slow_print("  }\n", 50, BLUE);
      slow_print("}\n\n", 50, BLUE);

      wait_for_user();

      set_color(YELLOW);
      slow_print("Project 2: Temperature and Humidity Monitor with DHT11 Sensor\n", 50, YELLOW);
      slow_print("- Components:\n", 50, YELLOW);
      slow_print("  - ESP8266/ESP32\n", 50, YELLOW);
      slow_print("  - DHT11 sensor\n", 50, YELLOW);
      slow_print("  - Breadboard and jumper wires\n\n", 50, YELLOW);

      slow_print("Step-by-Step Instructions:\n", 50, YELLOW);
      slow_print("1. Circuit:\n", 50, YELLOW);
      slow_print("   - Connect the DHT11 sensor's VCC to 3.3V, GND to GND, and Data to a GPIO pin (e.g., GPIO5 for ESP8266).\n\n", 50, YELLOW);

      slow_print("2. Code:\n", 50, YELLOW);
      slow_print("#include <ESP8266WiFi.h> // For ESP8266\n", 50, YELLOW);
      slow_print("//#include <WiFi.h> // For ESP32\n", 50, YELLOW);
      slow_print("#include <DHT.h>\n\n", 50, YELLOW);
      slow_print("const char* ssid = \"your_SSID\";\n", 50, YELLOW);
      slow_print("const char* password = \"your_PASSWORD\";\n", 50, YELLOW);
      slow_print("#define DHTPIN 5\n", 50, YELLOW);
      slow_print("#define DHTTYPE DHT11\n\n", 50, YELLOW);
      slow_print("DHT dht(DHTPIN, DHTTYPE);\n", 50, YELLOW);
      slow_print("WiFiServer server(80);\n\n", 50, YELLOW);
      slow_print("void setup() {\n", 50, YELLOW);
      slow_print("  Serial.begin(115200);\n", 50, YELLOW);
      slow_print("  dht.begin();\n", 50, YELLOW);
      slow_print("  WiFi.begin(ssid, password);\n\n", 50, YELLOW);
      slow_print("  while (WiFi.status() != WL_CONNECTED) {\n", 50, YELLOW);
      slow_print("    delay(500);\n", 50, YELLOW);
      slow_print("    Serial.print(\".\");\n", 50, YELLOW);
      slow_print("  }\n\n", 50, YELLOW);
      slow_print("  Serial.println(\"WiFi connected\");\n", 50, YELLOW);
      slow_print("  server.begin();\n", 50, YELLOW);
      slow_print("}\n\n", 50, YELLOW);
      slow_print("void loop() {\n", 50, YELLOW);
      slow_print("  WiFiClient client = server.available();\n", 50, YELLOW);
      slow_print("  if (client) {\n", 50, YELLOW);
      slow_print("    String request = client.readStringUntil('\\r');\n", 50, YELLOW);
      slow_print("    client.flush();\n\n", 50, YELLOW);
      slow_print("    float h = dht.readHumidity();\n", 50, YELLOW);
      slow_print("    float t = dht.readTemperature();\n\n", 50, YELLOW);
      slow_print("    client.print(\"HTTP/1.1 200 OK\\r\\n\");\n", 50, YELLOW);
      slow_print("    client.print(\"Content-Type: text/html\\r\\n\\r\\n\");\n", 50, YELLOW);
      slow_print("    client.print(\"<!DOCTYPE HTML>\\r\\n<html>\\r\\n\");\n", 50, YELLOW);
      slow_print("    client.print(\"<p>Temperature: \");\n", 50, YELLOW);
      slow_print("    client.print(t);\n", 50, YELLOW);
      slow_print("    client.print(\" *C</p>\");\n", 50, YELLOW);
      slow_print("    client.print(\"<p>Humidity: \");\n", 50, YELLOW);
      slow_print("    client.print(h);\n", 50, YELLOW);
      slow_print("    client.print(\" %</p>\");\n", 50, YELLOW);
      slow_print("    client.print(\"</html>\\r\\n\");\n\n", 50, YELLOW);
      slow_print("    delay(1);\n", 50, YELLOW);
      slow_print("    client.stop();\n", 50, YELLOW);
      slow_print("  }\n", 50, YELLOW);
      slow_print("}\n\n", 50, YELLOW);

      wait_for_user();

      set_color(GREEN);
      slow_print(" 5. Importance of ESP Boards\n", 50, GREEN);
      slow_print("- Affordability: ESP boards are cost-effective, making them accessible for both hobbyists and professionals.\n", 50, GREEN);
      slow_print("- Connectivity: Built-in Wi-Fi and Bluetooth provide easy wireless communication.\n", 50, GREEN);
      slow_print("- Community Support: A large community and extensive documentation make it easier to find solutions and support.\n", 50, GREEN);
      slow_print("- Versatility: Suitable for a wide range of applications, from simple LED control to complex IoT systems.\n\n", 50, GREEN);

      wait_for_user();

      set_color(RED);
      slow_print(" 6. Disadvantages of ESP Boards\n", 50, RED);
      slow_print("- Limited GPIO Pins: Compared to other microcontrollers, ESP boards have fewer GPIO pins.\n", 50, RED);
      slow_print("- Power Consumption: While there are low-power modes, the ESP boards can be power-hungry in active mode.\n", 50, RED);
      slow_print("- Complexity: For beginners, the initial setup and programming might be challenging.\n\n", 50, RED);

      wait_for_user();

      set_color(BLUE);
      slow_print(" Conclusion\n", 50, BLUE);
      slow_print("ESP boards offer a powerful and flexible platform for IoT and embedded applications. By following the steps and projects outlined, you can harness their capabilities for a variety of projects. With practice and exploration, the potential of ESP boards in your applications is vast.\n\n", 50, BLUE);

      wait_for_user();

      // Quiz Section
      set_color(GREEN);
      slow_print(" Quiz Section\n\n", 50, GREEN);

      char answer[50];

      slow_print("1. Which ESP board has a dual-core processor?\n", 50, GREEN);
      slow_print("a) ESP8266\n", 50, GREEN);
      slow_print("b) ESP32\n\n", 50, GREEN);
      slow_print("Enter your answer: ", 50, GREEN);
      fgets(answer, sizeof(answer), stdin);
      if (answer[0] == 'b' || answer[0] == 'B') {
          slow_print("Correct!\n\n", 50, GREEN);
      } else {
          slow_print("Incorrect. The correct answer is b) ESP32.\n\n", 50, RED);
      }

      slow_print("2. What is the primary use of ESP boards?\n", 50, GREEN);
      slow_print("a) Gaming\n", 50, GREEN);
      slow_print("b) IoT Projects\n", 50, GREEN);
      slow_print("c) Web Development\n\n", 50, GREEN);
      slow_print("Enter your answer: ", 50, GREEN);
      fgets(answer, sizeof(answer), stdin);
      if (answer[0] == 'b' || answer[0] == 'B') {
          slow_print("Correct!\n\n", 50,GREEN);
          slow_print("b) IoT Projects\n\n", 50, GREEN);
      } else {
          slow_print("Incorrect. The correct answer is b) IoT Projects.\n\n", 50, RED);
      }

      slow_print("3. Which library is commonly used to program ESP boards in the Arduino IDE?\n", 50, GREEN);
      slow_print("a) Python\n", 50, GREEN);
      slow_print("b) C++\n", 50, GREEN);
      slow_print("c) ESP8266WiFi\n\n", 50, GREEN);
      slow_print("Enter your answer: ", 50, GREEN);
      fgets(answer, sizeof(answer), stdin);
      if (answer[0] == 'c' || answer[0] == 'C') {
          slow_print("Correct!\n\n", 50, GREEN);
      } else {
          slow_print("Incorrect. The correct answer is c) ESP8266WiFi.\n\n", 50, RED);
      }

      // Practice Section
      set_color(YELLOW);
      slow_print(" Practice Section\n\n", 50, YELLOW);

      slow_print("1. Create a project to control an LED connected to GPIO2 of an ESP8266 through a web server. Include buttons to turn the LED on and off.\n\n", 50, YELLOW);
      slow_print("2. Develop a temperature and humidity monitoring system using the DHT11 sensor with an ESP32. Display the readings on a web page.\n\n", 50, YELLOW);

      set_color(WHITE);

      return 0;
}
