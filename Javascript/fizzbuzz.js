function fizzbuzz() {
    for (let index = 1; index <= 100; index++) {
        if (index % 15 == 0) {
            console.log("fizzbuzz")
        }
        else if (index % 3 == 0) {
            console.log("fizz")
        } else if (index % 5 == 0) {
            console.log("buzz")
        }
        else {
            console.log(index)
        }
    }
}
//famous interview question fizzbuzz