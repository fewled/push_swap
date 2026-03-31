use push_swap::Package;

fn main() {
    let package = Package::new();
    match package {
        Ok(mut content) => {
            println!("{:?}", content);
            content.inject();
            println!("{:?}", content);
        }
        Err(msg) => println!("[x] {msg}."),
    }
}
