# Hungry Robot mit ESP32 und MicroPython

Dieses Projekt enthält den Quellcode und Anleitungen für den Aufbau eines "Hungry Robot", einer interaktiven Vorrichtung, die mithilfe eines Servomotors und eines Abstandssensors auf Bewegungen reagiert. Dieses Projekt wurde für den ESP32 mit MicroPython programmiert.

## Hardware-Anforderungen

- ESP32-Entwicklungsboard
- Servomotor (z.B. SG90)
- Abstandssensor (z.B. IR- oder Ultraschallsensor)
- LEDs (optional für zusätzliche visuelle Rückmeldung)
- Verbindungskabel und eventuell ein Breadboard

## Schaltplan

Stellen Sie sicher, dass Sie den Servomotor, den Sensor und die LEDs korrekt mit Ihrem ESP32 verbinden. Die genauen Pins, die Sie verwenden sollten, sind im Code definiert und können nach Bedarf angepasst werden.

## Software-Anforderungen

- MicroPython Firmware für ESP32
- Ein Code-Editor wie Vscode, um den Python-Code zu bearbeiten und auf den ESP32 hochzuladen

## Installation und Einrichtung

1. **Flashen Sie MicroPython auf den ESP32**: Besuchen Sie [die offizielle MicroPython-Website](https://micropython.org/download/esp32/) für Anweisungen zum Flashen von MicroPython auf Ihren ESP32.

2. **Laden Sie den Code auf den ESP32**: Verwenden Sie Thonny, Mu oder ein ähnliches Tool, um den `hungry_robot.py` Code auf Ihren ESP32 hochzuladen.

## Verwendung

Nachdem Sie den Code auf den ESP32 geladen haben, wird der Hungry Robot aktiviert, sobald der ESP32 mit Strom versorgt wird. Der Roboter reagiert auf Objekte, die sich in einem bestimmten Abstand vor dem Sensor befinden, und führt eine vordefinierte Bewegungssequenz aus.

## Anpassung

Sie können den Code nach Ihren Wünschen anpassen, um unterschiedliche Verhaltensweisen, Bewegungen oder Reaktionen zu erzielen.

## Lizenz

Dieses Projekt ist unter [MIT Lizenz](LICENSE) lizenziert.

## Kontakt

Für weitere Informationen oder bei Fragen hinterlassen Sie bitte eine Nachricht.

---
**Viel Spaß beim Bauen und Experimentieren mit Ihrem Hungry Robot!**
