import 'dart:io';

main() {
  int d = int.parse(stdin.readLineSync() ?? "0");

  for (int f = 1; f <= 12; f = f + 2) {
    if (d % f == 0) {
      print("divisible by $f");
    }
  }
}
