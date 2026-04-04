use push_swap::Package;

fn main() {
    let package = Package::new();
    match package {
        Ok(mut package) => {
            package.debug();
            package.inject();
            package.debug();
            package.transfer();
            package.debug();
            package.arrange();
            package.debug();
            package.refill();
            package.debug();
        }
        Err(msg) => println!("[x] {msg}."),
    }
}
