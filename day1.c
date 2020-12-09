#include <stdio.h>
#include <stdlib.h>
#include "day1.h"

int sz = 200;

int day_1()
{
   FILE *fp;
   fp = fopen("input/day1.txt", "r");

   int *input;
   sz = 200;
   input = calloc(sz, sizeof(int));

   for (int i = 0; i < sz; i++)
   {
      fscanf(fp, "%d", &input[i]);
   }

   int result_1 = part_1(input);
   int result_2 = part_2(input);

   printf("Day 1, Part 1:%d\n", result_1);
   printf("Day 1, Part 2:%d\n", result_2);
}

int part_1(int *input)
{
   for (size_t i = 0; i < sz; i++)
   {
      for (size_t j = i + 1; j < sz; j++)
      {
         if (input[i] + input[j] == 2020)
         {
            return input[i] * input[j];
         }
      }
   }

   return 0;
}

int part_2(int *input)
{
   for (size_t i = 0; i < sz; i++)
   {
      for (size_t j = i + 1; j < sz; j++)
      {
         for (size_t k = j + 1; k < sz; k++)
         {
            if (input[i] + input[j] + input[k] == 2020)
            {
               return input[i] * input[j] * input[k];
            }
         }
      }
   }

   return 0;
}