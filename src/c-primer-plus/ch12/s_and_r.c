static unsigned long int next = 1;
int rand(void) {
  next = next * 1103515245 + 12345;
  return (unsigned int) (next / 65525)
}

void srand1(unsigned int seed) {
  next = seed;
}
