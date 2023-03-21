import math
import time

# Dimensions of the screen
WIDTH = 80
HEIGHT = 24

# Parameters for the donut shape
A = 1
B = 2
scale_x = 2
scale_y = 1
scale_z = 4

# Set up the screen buffer
screen = [' ' for _ in range(WIDTH * HEIGHT)]

# Utility function to plot a pixel in the screen buffer
def plot(x, y, c):
    if 0 <= x < WIDTH and 0 <= y < HEIGHT:
        screen[y * WIDTH + x] = c

# Utility function to clear the screen buffer
def clear():
    global screen
    screen = [' ' for _ in range(WIDTH * HEIGHT)]

# Main loop to animate the donut
def main():
    theta = 0
    while True:
        # Clear the screen buffer
        clear()

        # Calculate the donut coordinates
        cos_theta = math.cos(theta)
        sin_theta = math.sin(theta)
        cos_phi = math.cos(theta / 2)
        sin_phi = math.sin(theta / 2)
        cos_A = math.cos(A)
        sin_A = math.sin(A)
        cos_B = math.cos(B)
        sin_B = math.sin(B)
        R1 = (HEIGHT / 2) * scale_y
        R2 = (R1 * scale_x) // scale_z

        # Draw each pixel of the donut
        for j in range(-R1, R1 + 1):
            for i in range(-R2, R2 + 1):
                x = i * scale_z
                y = R1 * sin_phi - j * cos_phi
                z = R1 * cos_phi + j * sin_phi
                u = x * cos_B - z * sin_B
                v = y * cos_A - z * sin_A
                w = x * sin_B + z * cos_B
                f = 1 / (w + 2)
                xp = int(WIDTH / 2 + u * f * scale_x)
                yp = int(HEIGHT / 2 - v * f * scale_y)
                if f > 0 and xp >= 0 and xp < WIDTH and yp >= 0 and yp < HEIGHT:
                    luminance = '.,-~:;=!*#$@'[int(f * 12)]
                    plot(xp, yp, luminance)

        # Print the screen buffer to the console
        print(''.join(screen))

        # Pause for a short time before animating the next frame
        time.sleep(0.05)
        theta += 0.05

if __name__ == '__main__':
    main()
