load("//tools:cpplint.bzl", "cpplint")
load("//tools:apollo_package.bzl", "apollo_cc_test", "apollo_package", "apollo_plugin")

package(default_visibility = ["//visibility:public"])

PLANNING_COPTS = ["-DMODULE_NAME=\\\"planning\\\""]

filegroup(
    name = "runtime_files",
    srcs = glob([
        "conf/**",
    ]),
)
# install(
#     name = "install",
#     data_dest = "planning-task-open-space-roi-decider",
#     data = [
#         ":cyberfile.xml",
#         ":planning-task-open-space-roi-decider.BUILD",
#     ],
#     deps = [
#         "install_plugin",
#     ],
# )

# install_plugin(
#     name = "install_plugin",
#     data = [
#     ] + glob(["conf/**"]),
#     description = ":plugins.xml",
#     plugin = ":libopen_space_roi_decider.so",
# )

# install_src_files(
#     name = "install_src",
#     deps = [
#         ":install_all_src",
#         ":install_hdrs"
#     ],
# )

# install_src_files(
#     name = "install_all_src",
#     src_dir = ["."],
#     dest = "planning-task-open-space-roi-decider/src",
#     filter = "*",
# )

# install_src_files(
#     name = "install_hdrs",
#     src_dir = ["."],
#     dest = "planning-task-open-space-roi-decider/include",
#     filter = "*.h",
# )

apollo_cc_test(
    name = "open_space_roi_decider_test",
    size = "small",
    srcs = ["open_space_roi_decider_test.cc"],
    tags = ["exclude"],
    deps = [
        ":open_space_roi_decider_lib",
        "@com_google_googletest//:gtest_main",
    ],
)

apollo_plugin(
    name = "libopen_space_roi_decider.so",
    srcs = ["open_space_roi_decider.cc"],
    hdrs = ["open_space_roi_decider.h"],
    description = ":plugins.xml",
    copts = ["-DMODULE_NAME=\\\"planning\\\""],
    deps = [
        "//modules/planning/planning_open_space:apollo_planning_open_space",
        "//modules/planning/planning_interface_base:apollo_planning_planning_interface_base",
        "//modules/planning/tasks/open_space_roi_decider/proto:open_space_roi_decider_cc_proto",
    ],
)

apollo_package()

cpplint()
