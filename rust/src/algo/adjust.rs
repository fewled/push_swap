use super::Package;

impl Package {
    pub fn adjust(&mut self) {
        let mut min_index: usize = 0;
        let mut min_value: i32 = self.a.content[min_index];
        for (index, element) in self.a.content.iter().enumerate() {
            if *element < min_value {
                min_value = *element;
                min_index = index;
            }
        }
        if min_index > (self.a.content.len() - 1) / 2 {
            while self.a.content[0] != min_value {
                self.rra();
            }
        } else {
            while self.a.content[0] != min_value {
                self.ra();
            }
        }
    }
}
