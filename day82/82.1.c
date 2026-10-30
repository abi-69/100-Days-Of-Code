#include <stdio.h>

/* Q132: Print a traffic-light message based on an enum value. */
enum TrafficLight { RED, YELLOW, GREEN };
int main(void) { int input; scanf("%d", &input); switch ((enum TrafficLight)input) { case RED: puts("Stop"); break; case YELLOW: puts("Wait"); break; case GREEN: puts("Go"); break; default: puts("Invalid"); } return 0; }
