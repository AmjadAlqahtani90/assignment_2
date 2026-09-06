fn display_data(data: &Vec<i32>) {
    println!("Numbers: {:?}", data);
}

fn main() {
    let numbers = Box::new(vec![10, 20, 30, 40, 50]);

    display_data(&numbers);

    println!("Sum: {}", numbers.iter().sum::<i32>());
}