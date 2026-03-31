use push_swap::Package;

fn main() {
    let package = Package::new();
    match package {
        Ok(content) => println!("{:?}", content),
        Err(msg) => println!("[x] {msg}."),
    }
}
