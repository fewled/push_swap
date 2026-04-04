use push_swap::Package;

fn main() {
    let package = Package::new();
    match package {
        Ok(mut package) => {
            package.inject().transfer().arrange().refill().adjust();
        }
        Err(msg) => println!("[x] {msg}."),
    }
}
