use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read input");
    let input: i64 = input.trim().parse().expect("Not a valid integer");
    
    let mut nums = String::new();
    io::stdin().read_line(&mut nums).expect("Failed to read numbers");
    
    let nums: Vec<i64> = nums
        .trim()
        .split_whitespace()
        .filter_map(|n| n.parse().ok())
        .collect();

    let sum_of_nums: i64 = nums.iter().sum();
    println!("{}", input * (input + 1) / 2 - sum_of_nums);
}

