load("//tools:apollo_package.bzl", "apollo_cc_library", "apollo_cc_binary", "apollo_package", "apollo_component")
load("//tools:cpplint.bzl", "cpplint")

package(default_visibility = ["//visibility:public"])

filegroup(
    name = "remote_control_commmand_demo_files",
    srcs = glob([
        "dag/**",
        "launch/**",
        "conf/**",
    ]),
)

apollo_component(
    name = "libremote_control_commmand_demo_component.so",
    srcs = [
        "remote_control_commmand_demo_component.cc",
    ],
    hdrs = [
        "remote_control_commmand_demo_component.h",
    ],
    linkstatic = True,
    deps = [
        "//cyber",
        "//remote_control_commmand_demo/proto:remote_control_commmand_demo_proto",

    ],
)

apollo_package()

cpplint()