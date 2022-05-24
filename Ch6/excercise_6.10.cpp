void ExchangeValue(int *ptrA, int *ptrB)
{
    int tmp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = tmp;
}
