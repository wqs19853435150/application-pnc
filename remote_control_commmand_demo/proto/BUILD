load("//tools:apollo_package.bzl", "apollo_package")
load("//tools/proto:proto.bzl", "proto_library")
load("//tools:cpplint.bzl", "cpplint")

package(default_visibility = ["//visibility:public"])

proto_library(
    name = "remote_control_commmand_demo_proto",
    srcs = ["remote_control_commmand_demo.proto"],
)

apollo_package()

cpplint()