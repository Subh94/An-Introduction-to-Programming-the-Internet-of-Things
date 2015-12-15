long fibonacci(long n)
{
return n < 2 ? n : fibonacci(n - 1) + fibonacci(n - 2);
}
int main(int argc, char const **argv)
{
double phi = fibonacci(45) / (double)fibonacci(44);
return 0;
}
