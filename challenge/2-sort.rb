# Check if each argument can be converted to an integer, ignoring invalid ones
sorted_numbers = ARGV.map do |arg|
    begin
      Integer(arg)
    rescue ArgumentError
      nil  # Ignore non-integer values
    end
  end.compact.sort
  
  # Output the sorted numbers
  sorted_numbers.each { |num| puts num }
  