#pragma once

bool isOutofRange(int, int, int);
void changeFloorAndCeiling(int*, int*, int, int);

void changeFloorAndCeiling(int* floor, int* ceiling, int target, int guess)
{
  if(guess > target)
  {
    *ceiling = guess;
  }
  else
  {
    *floor = guess;
  }
}

bool isOutofRange(int ceiling, int floor, int guess)
{
  if(guess <= ceiling && guess >= floor)
  {
    return false;
  }
  else
  {
    return true;
  }
}
