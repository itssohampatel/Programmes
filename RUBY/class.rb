class States
 @@NO_NAME=0
	def initialize (name)
	 @NAME=name
	 @@NO_NAME+=1
	end 
	def display()
	 puts"my name is #@NAME"
	end 
	def total_no_of_names()
	 puts"total number of names: #@@NO_NAME"
	end 
 end

first=States.new(gets)
second=States.new(gets)
third=States.new(gets)
fourth=States.new(gets)

first.total_no_of_names()
second.total_no_of_names()
third.total_no_of_names()
fourth.total_no_of_names()
