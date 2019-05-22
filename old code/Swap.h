#pragma once

void swap(int list[], int src, int dst) {
    int temp = list[src];
    list[src] = list[dst];
    list[dst] = temp;
}
