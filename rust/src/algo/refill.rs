use super::Package;

impl Package {
    pub fn refill(&mut self) -> &mut Self {
        let mut target_value: i32;
        let mut target_index: usize;
        while self.b.content.len() > 0 {
            target_value = self.find_value(self.b.content[0]);
            target_index = self.find_index(target_value);
            while self.a.content[0] != target_value {
                if target_index <= (self.a.content.len() - 1) / 2 {
                    self.ra();
                } else {
                    self.rra();
                }
            }
            self.pa();
        }
        self
    }
    fn find_value(&self, value: i32) -> i32 {
        let mut next_value: i32;
        for (index, element) in self.a.content.iter().enumerate() {
            if index == self.a.content.len() - 1 {
                next_value = self.a.content[0];
            } else {
                next_value = self.a.content[index + 1];
            }
            if (*element < value && value < next_value)
                || *element > next_value && (value > *element || value < next_value)
            {
                return next_value;
            }
        }
        return self.a.content[0];
    }
    fn find_index(&self, value: i32) -> usize {
        for (index, element) in self.a.content.iter().enumerate() {
            if *element == value {
                return index;
            }
        }
        0
    }
}
