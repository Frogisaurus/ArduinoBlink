String str = "isa";

int Led1 = 3;

int TU = 250;

void dot() {
  digitalWrite(Led1, 1);
  delay(TU * 1);
}

void dash() {
  digitalWrite(Led1, 1);
  delay(TU * 3);
}

void space() {
  digitalWrite(Led1, 0);
  delay(TU * 1);
}

void spaceLetter() {
  digitalWrite(Led1, 0);
  delay(TU * 3);
}

void spaceWord() {
  digitalWrite(Led1, 0);
  delay(TU * 7);
}

void complete() {
  digitalWrite(Led1, 0);
}

void a() {
  dot();
  space();
  dash();
}

void b() {
  dash();
  space();
  dot();
  space();
  dot();
  space();
  dot();
}

void c() {
  dash();
  space();
  dot();
  space();
  dash();
  space();
  dot();
}

void d() {
  dash();
  space();
  dot();
  space();
  dot();
  space();
}

void e() {
  dot();
}

void f() {
  dot();
  space();
  dot();
  space();
  dash();
  space();
  dot();
}

void g() {
  dash();
  space();
  dash();
  space();
  dot();
}

void h() {
  dot();
  space();
  dot();
  space();
  dot();
  space();
  dot();
}

void i() {
  dot();
  space();
  dot();
}

void j() {
  dot();
  space();
  dash();
  space();
  dash();
  space();
  dash();
}

void k() {
  dash();
  space();
  dot();
  space();
  dash();
}

void l() {
  dot();
  space();
  dash();
  space();
  dot();
  space();
  dot();
}

void m() {
  dash();
  space();
  dash();
}

void n() {
  dash();
  space();
  dot();
}

void o() {
  dash();
  space();
  dash();
  space();
  dash();
}

void p() {
  dot();
  space();
  dash();
  space();
  dash();
  space();
  dot();
}

void q() {
  dash();
  space();
  dash();
  space();
  dot();
  space();
  dash();
}

void r() {
  dot();
  space();
  dash();
  space();
  dot();
}

void s() {
  dot();
  space();
  dot();
  space();
  dot();
}

void t() {
  dash();
}

void u() {
  dot();
  space();
  dot();
  space();
  dash();
}

void v() {
  dot();
  space();
  dot();
  space();
  dot();
  space();
  dash();
}

void w() {
  dot();
  space();
  dash();
  space();
  dash();
}

void x() {
  dash();
  space();
  dot();
  space();
  dot();
  space();
  dash();
}

void y() {
  dash();
  space();
  dot();
  space();
  dash();
  space();
  dash();
}

void z() {
  dash();
  space();
  dash();
  space();
  dot();
  space();
  dot();
}

void letter(char le) {
  if (le == 'A') {
    a();
  }
  if (le == 'B') {
    b();
  }
  if (le == 'C') {
    c();
  }
  if (le == 'D') {
    d();
  }
  if (le == 'E') {
    e();
  }
  if (le == 'F') {
    f();
  }
  if (le == 'G') {
    g();
  }
  if (le == 'H') {
    h();
  }
  if (le == 'I') {
    i();
  }
  if (le == 'J') {
    j();
  }
  if (le == 'K') {
    k();
  }
  if (le == 'L') {
    l();
  }
  if (le == 'M') {
    m();
  }
  if (le == 'N') {
    n();
  }
  if (le == 'O') {
    o();
  }
  if (le == 'P') {
    p();
  }
  if (le == 'Q') {
    q();
  }
  if (le == 'R') {
    r();
  }
  if (le == 'S') {
    s();
  }
  if (le == 'T') {
    t();
  }
  if (le == 'U') {
    u();
  }
  if (le == 'V') {
    v();
  }
  if (le == 'W') {
    w();
  }
  if (le == 'X') {
    x();
  }
  if (le == 'Y') {
    y();
  }
  if (le == 'Z') {
    z();
  }
}

void setup() {

  str.toUpperCase();
  
  char char_array[str.length() + 1];

  str.toCharArray(char_array, str.length() + 1);

  // put your setup code here, to run once:
  pinMode(3, OUTPUT);

    for (int i=0; i<sizeof char_array/sizeof char_array[0]; i++) {
      letter(char_array[i]);
      if(i + 1 < sizeof char_array/sizeof char_array[0]){
        if(isSpace(char_array[i + 1])){
          spaceWord();
        } else{
          spaceLetter();
        }
      }
    }

  complete();
}

void loop() {
  // put your main code here, to run repeatedly:

}
