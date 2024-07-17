// Remove the duplicate declaration of 'user'
// const user:object = {name:"John",age:30};

// error in ts file
// console.log(user.email);


//   types in typescript 
// 1. string
// 2. number
// 3. boolean
// 4. any
// 5. void
// 6. null
// 7. undefined
// 8. never
// 9. Array
// 10. Tuple
// 11. Enum
// 12. Object
// 13. Interface
// 14. Type Assertion
// 15. Classes
// 16. Arrow Functions
// 17. Generics
// 18. Modules
// 19. Decorators

// 1. string
let str: string = "Hello World";




// 2. number
let num: number = 100;

// 3. boolean

let isFlag: boolean = true;

// 4. any

let anyType: any = "Hello World";

// 5. void

function log(message: string): void
{
    console.log(message);
}

// 6. null

let n: null = null;

// 7. undefined

let u: undefined = undefined;

// 8. never

function error(message: string): never
{
    throw new Error(message);
}

// 9. Array

let list: number[] = [1, 2, 3];

let list1: Array<number> = [1, 2, 3];

// 10. Tuple

let x: [string, number];
x = ["Hello", 10];

// 11. Enum

enum Color {Red, Green, Blue};
let c: Color = Color.Green;

// 12. Object

let obj: object = {name: "John", age: 30};

// 13. Interface

interface User
{
    name: string;
    age: number;
}

let user1: User = {name: "John", age: 30};

// 14. Type Assertion

let message: any = "Hello World";
let length3: number = (<string>message).length;
let length1: number = (message as string).length;

// 15. Classes

class Person
{
    name: string;
    age: number;

    constructor(name: string, age: number)
    {
        this.name = name;
        this.age = age;
    }

    display(): void
    {
        console.log(this.name);
        console.log(this.age);
    }
}

let person = new Person("John", 30);
person.display();


    // 16. Arrow Functions  
    // Normal Function
    function add(a: number, b: number): number
    {
        return a + b;
    }
    console.log(add(10, 20));

    // Arrow Function
  
    let add1 = (a: number, b: number): number => a + b;
    console.log(add1(10, 20));

    // 17. Generics

    function display<T>(args: T): T
    {
        return args;
    }


    // 18. Modules





    // 19. Decorators
