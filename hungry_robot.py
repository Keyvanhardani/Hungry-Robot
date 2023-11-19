from machine import Pin, PWM, ADC
import time

# Initialisiere den Servomotor an einem PWM-fähigen Pin
servo_pin = 12
servo = PWM(Pin(servo_pin), freq=50)
servo.duty(77) # Startposition des Servos

# Initialisiere den ADC für den Abstandssensor
sensor_pin = 34
sensor = ADC(Pin(sensor_pin))
sensor.atten(ADC.ATTN_11DB) # Konfiguriere für eine volle Skala von 3,3V

# Initialisiere die LEDs
led_builtin = Pin(2, Pin.OUT)
led_extra1 = Pin(4, Pin.OUT)
led_extra2 = Pin(5, Pin.OUT)

THRESHOLD = 360

def action():
    led_control(True)
    time.sleep(1)

    servo.duty(26) # Bewege den Arm nach oben
    time.sleep(0.3)
    servo.duty(115) # Bewege den Arm nach unten
    time.sleep(0.5)

    # Nach dem Essen Sequenz
    # Hier können Sie weitere Bewegungen hinzufügen

    servo.duty(77) # Zurück zur Startposition
    time.sleep(0.5)
    led_control(False)

def led_control(state):
    # LEDs an/aus
    led_builtin.value(state)
    led_extra1.value(not state)
    led_extra2.value(not state)

def main():
    prev_sensor_value = 0
    while True:
        sensor_value = sensor.read()
        
        if prev_sensor_value <= THRESHOLD and sensor_value > THRESHOLD:
            action()
        
        prev_sensor_value = sensor_value
        time.sleep(0.01)

main()
