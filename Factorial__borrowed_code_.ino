int factNum = 4;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int result;
  result = factorial(factNum);
  Serial.println(result);
  delay(5000);
  
}

int factorial(int n)
{
  if (n == 1)
  {
    return 1;
  }
  else
  {
    return n * factorial(n-1);
  }
}

