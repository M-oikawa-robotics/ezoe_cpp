// void
auto a() { }
// int
auto b() { return 0 ; }
// double
auto c() { return 0.0 ; }
// std::string
auto d() { return ""s ; }

int main()
{
  printf("unko\n");
}
// エラー
// return文の型が一致しない。
/*
auto e()
{
    return 0 ;
    return 0.0 ;
}
*/
