#!/usr/bin/env ruby

# Get the arguments passed
args = ARGV

# Sort numerically, skipping non-numeric inputs
sorted = args.select { |arg| arg =~ /^-?\d+$/ }.map(&:to_i).sort.reverse

puts sorted
