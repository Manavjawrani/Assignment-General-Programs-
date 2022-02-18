class Animal {
void whoAmI() {
System.out.println("I am a generic Animal.");
}
}
class Dog extends Animal {
void whoAmI() {
System.out.println("I am a Dog.");
}
}
class Cow extends Animal {
void whoAmI() {

System.out.println("I am a Cow.");
}
}
class Snake extends Animal {
void whoAmI() {
System.out.println("I am a Snake.");
}
}
class Runpoly {
public static void main(String[] args) {
Animal ref1 = new Animal();
Dog ref2 = new Dog();
Animal ref3 = new Cow();
Animal ref4 = new Animal();
ref1.whoAmI();
ref2.whoAmI();
ref3.whoAmI();
ref4.whoAmI();
}
}