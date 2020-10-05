#include "libmx.h"

int mx_num_len(int number) {
    int count = 0;
    long num = number;

    if (num == 0) {
        count++;
    } else if (num < 0) {
          count++;
          num = -num;
          while (num != 0) {
              count++;
              num /= 10;
      }
    } else {
          while (num != 0) {
              count++;
              num /= 10;
          }
      }
    return count;
}
