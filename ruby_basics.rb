class Person
  # Set your class variable to 0 on line 3
  @@people_count = 0
  
  def initialize(name)
    @name = name
    # Increment your class variable on line 8
    @@people_count += 1
  end
  
  def self.number_of_instances
    # Return your class variable on line 13
    @@people_count
  end
end

matz = Person.new("Yukihiro")
dhh = Person.new("David")

puts "Number of Person instances: #{Person.number_of_instances}"



class Message
    @@messages_sent = 0    
    
    def initialize(from, to)
        @from = from
        @to = to
        @@messages_sent += 1
    end
    
    def self.number_of_messages
        @@messages_sent
    end
end

class Email < Message
    def initialize(from, to)
        super
    end
end

my_message = Message.new("Abe", "Bob")