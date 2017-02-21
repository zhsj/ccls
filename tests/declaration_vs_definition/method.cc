class Foo {
  void declonly();
  virtual void purevirtual() = 0;
  void def();
};

void Foo::def() {}

/*
OUTPUT:
{
  "types": [{
      "id": 0,
      "usr": "c:@S@Foo",
      "short_name": "Foo",
      "qualified_name": "Foo",
      "definition": "1:1:7",
      "funcs": [1, 2],
      "all_uses": ["1:1:7", "1:7:6"]
    }],
  "functions": [{
      "id": 0,
      "usr": "c:@S@Foo@F@declonly#",
      "short_name": "declonly",
      "qualified_name": "Foo::declonly",
      "declaration": "1:2:8",
      "all_uses": ["1:2:8"]
    }, {
      "id": 1,
      "usr": "c:@S@Foo@F@purevirtual#",
      "short_name": "purevirtual",
      "qualified_name": "Foo::purevirtual",
      "declaration": "1:3:16",
      "declaring_type": 0,
      "all_uses": ["1:3:16"]
    }, {
      "id": 2,
      "usr": "c:@S@Foo@F@def#",
      "short_name": "def",
      "qualified_name": "Foo::def",
      "declaration": "1:4:8",
      "definition": "1:7:11",
      "declaring_type": 0,
      "all_uses": ["1:4:8", "1:7:11"]
    }],
  "variables": []
}
*/