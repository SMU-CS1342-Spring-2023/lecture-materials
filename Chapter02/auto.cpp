int main()
{
    auto x;       // does not compile
    auto x = 100; // does compile

    auto str = "100"; // Notice the inferred type is const char *?

    return 0;
}
