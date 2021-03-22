template <class T>
T revnum(T n)
{
    T rev = 0;
    for (size_t i = n; i > 0; i = i / 10)
    {
        rev = ((rev * 10) + (i % 10));
    }
    return rev;
}
